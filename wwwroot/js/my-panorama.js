// const { rotate } = require("three/webgpu");

// Function to set pitch and yaw, and restart auto-rotation
function setNewView() {
    const viewer = pannellum.viewer('streetview'); // Ensure the viewer instance is correctly referenced
    
        viewer.setPitch(-100);
        viewer.setYaw(150);

}

function initializePanorama() {
    let skyPitch = -3; // Initialize with the default pitch
    let hotspotPitch = -3; // Initialize with the default pitch

    const delaySec = 1500;
    const autoRotateDegree = -2;

    const panoramaViewer = pannellum.viewer('streetview', {
        default: {
            firstScene: "sky",
            author: "Matthew Petroff",
            sceneFadeDuration: 1000,
            autoLoad: true,
            autoRotate: autoRotateDegree,
            autoRotateInactivityDelay: delaySec,
        },

        scenes: {
            sky: {
                title: "Mason Circle",
                hfov: 150,
                pitch: skyPitch,
                yaw: 117,
                type: "equirectangular",
                panorama: "/imgs/pano/sky/sky.jpg",
                hotSpots: [
                    {
                        pitch: -68.1,
                        yaw: 116.9,
                        type: "scene",
                        text: "Spring House or Dairy",
                        sceneId: "hotspot1"
                    }
                ]
            },

            hotspot1: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: hotspotPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot1/hotspot1.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "",
                        sceneId: "sky",
                        targetYaw: -23,
                        targetPitch: 2
                    }
                ]
            },
        },


    });
}

