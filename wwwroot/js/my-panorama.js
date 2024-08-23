function initializePanorama() {
    const panoramaViewer = pannellum.viewer('panorama-container', {
        type: 'equirectangular',
        panorama: 'imgs/pano/hotspots/test/pano1.jpg',
        autoLoad: true,
        compass: true,
        maxPixelZoom: 2.0,

        hotSpots: [
            {
                pitch: 14.1,
                yaw: 1.5,
                type: "info",
                text: "Baltimore Museum of Art",
                URL: "https://artbma.org/"
            },
            {
                pitch: -9.4,
                yaw: 222.6,
                type: "info",
                text: "Art Museum Drive",
                clickHandlerFunc: () => {
                    panoramaViewer.loadScene({
                        type: 'equirectangular',
                        panorama: 'imgs/pano/hotspots/test/pano2.jpg'
                    });
                }
            },
            {
                pitch: -0.9,
                yaw: 144.4,
                type: "info",
                text: "North Charles Street"
            }
        ]
    });
}