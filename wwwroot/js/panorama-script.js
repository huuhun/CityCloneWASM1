console.log("js script running");
//const cors = require('cors');
//const baseUrl = 'http://localhost/panohost/imgs'
//const baseUrl = 'http://127.0.0.1:5500/index.html/imgs'
const baseUrl = 'http://192.168.10.67/panohost/imgs/'
let viewer, minimap, info, curr
function runapp() {
    const el = document.getElementById('streetview')
    info = document.getElementById('hotspot-info')
    const opt = {
        projectId: '61ea54ed25',
        canZoom: true,
        baseUrl: baseUrl,
        updateOnChange: false,
        autorotdelay: 1000
    }
    viewer = new PanoViewer(el, opt)
    // viewer.controls.enableDamping = true
    const minimapopt = {
        baseUrl: baseUrl,
        runtime: true,
        border: 'all',
        colorError: '#F0A155',
        radius: 6,
        borderRadius: 2,
        canSelect: false,
        canPan: false,
        canZoom: false,
        camera: {
            path: './imgs/field.svg',
            transform: {
                x: 48,
                y: 70,
                width: 96,
                height: 96,
                r: 0
            }
        }
    }
    minimap = new MiniMap(document.getElementById('mini-map'), minimapopt)
    minimap.load('1')
    let url_string = window.location.href
    let url = new URL(url_string);
    let panoname = url.searchParams.get("view") || 'overview'
    //let panoname = url.searchParams.get("view") || '3br_02'
    viewer.init().then(() => {
        loadPanoById(panoname, true)
    })
    viewer.onRequestLoadPano = (hp) => {
        loadPageById(hp.name)
    }
    viewer.onChangeRot = (z) => {
        if (curr)
            minimap.updateCam(curr.pos, z);
    };
    const allhotspot = []
    viewer.onChangeHotspot = (ls) => {
        for (const hp of allhotspot) {
            hp.el.style = `display:none`
        }
        for (const item of ls) {
            let hp = allhotspot.find(x => x.name == item.name)
            if (!hp) {
                hp = {
                    name: item.name,
                    el: createElementFromHTML(`<div class="pano-hotspot" ><img src="imgs/hotspot.svg?v=1.0.1"/></div>`)
                }
                allhotspot.push(hp)
                info.appendChild(hp.el)
            }
            hp.el.style = `top:${item.pos2d.y - 36}px;left:${item.pos2d.x - 36}px`
            // console.log("bbbb")
        }
        //  console.log("aaaaa")
    };
    minimap.onclick = (hp) => {

        loadPageById(hp.name)
    };
}
function createElementFromHTML(htmlString) {
    const div = document.createElement('div');
    div.innerHTML = htmlString.trim();
    const newElement = div.firstChild;
    console.log('Created Element:', newElement);
    return div.firstChild;
}
function loadPageById(id, firstload = false) {
    //window.location.href = `./?view=${id}`
    loadPanoById(id, firstload)
}

function loadPanoById(id, firstload = false) {
    fetch(`${baseUrl}/pano/${id}.json?t=${Math.random()}`)
        .then(res => res.json())
        .then(res => {
            curr = res
            for (const hp of res.links) {
                hp.type = 3
            }
            return viewer.loadPano(res, firstload, 0, 1000)
        })
        .catch(console.log)
    //window.history.pushState({}, null, `./?view=${id}`);
    DotNet.invokeMethodAsync('View360', 'NavigateToView', id);

}
runapp();

