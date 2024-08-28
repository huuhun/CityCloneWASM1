// const { rotate } = require("three/webgpu");

//const { texture } = require("three/webgpu");

let isSceneSwitching = false; // Flag to track if a scene switch is in progress

function initializePanorama() {
    let currentPitch = 10; // Initialize with the default pitch
    let autoRotateSpeed = -3; // Auto-rotation speed
    const autoRotateDelay = 1000; // Delay in milliseconds (e.g., 1000ms = 1s)

    const panoramaViewer = pannellum.viewer('streetview', {
        default: {
            firstScene: "sky",
            author: "Matthew Petroff",
            sceneFadeDuration: 1500,
            autoLoad: true,
            autoRotate: autoRotateSpeed, // Set initial auto-rotation speed
            //autoRotateInactivityDelay: 1500, // Disable auto-rotation delay

        },
        scenes: {
            sky: {
                title: "Mason Circle",
                hfov: 150,
                //pitch: -50,
                //yaw: 117,
                type: "equirectangular",
                panorama: "/imgs/pano/sky/sky.jpg",
                hotSpots: [
                    // {
                    //     pitch: -68.1,
                    //     yaw: 116.9,
                    //     type: "scene",
                    //     text: "hotspot1",
                    //     sceneId: "hotspot1",
                    //     cssClass: "custom-hotspot",
                    // },
                    {
                        pitch: -68.1,
                        yaw: 116.9,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -80.1,
                        yaw: 100.0,
                        type: "scene",
                        text: "hotspot2",
                        sceneId: "hotspot2",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -68.1,
                        yaw: 150.9,
                        type: "scene",
                        text: "hotspot3",
                        sceneId: "hotspot3",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -57.1,
                        yaw: 60.9,
                        type: "scene",
                        text: "hotspot4",
                        sceneId: "hotspot4",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -73.1,
                        yaw: -17.0,
                        type: "scene",
                        text: "hotspot6",
                        sceneId: "hotspot6",
                        cssClass: "custom-hotspot",
                    },

                    {
                        pitch: -110.1,
                        yaw: -13.0,
                        type: "scene",
                        text: "hotspot7",
                        sceneId: "hotspot7",
                        cssClass: "custom-hotspot",
                    },

                    {
                        pitch: -55.1,
                        yaw: 80.9,
                        type: "scene",
                        text: "hotspot8",
                        sceneId: "hotspot8",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -120.1,
                        yaw: 18.0,
                        type: "scene",
                        text: "hotspot9",
                        sceneId: "hotspot9",
                        cssClass: "custom-hotspot",
                    },
                    {
                        pitch: -74.9,
                        yaw: -53.0,
                        type: "scene",
                        text: "hotspot10",
                        sceneId: "hotspot10",
                        cssClass: "custom-hotspot", //
                    },
                ]
            },

            hotspot1: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot1/hotspot1.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",
                        //targetYaw: 37.1,
                        // targetPitch: 2
                    },
                    {
                        pitch: 0.0,
                        yaw: 58.0,
                        type: "scene",
                        text: "hotspot8",
                        sceneId: "hotspot8",
                        cssClass: "custom-hotspot",

                        targetYaw: 58.0,
                        targetPitch: 0.0,
                    },

                    {
                        pitch: 0.0,
                        yaw: -70.0,
                        type: "scene",
                        text: "hotspot2",
                        sceneId: "hotspot2",
                        cssClass: "custom-hotspot",

                        targetYaw: -70.0,
                        targetPitch: 0.0,
                    },

                    {
                        pitch: 0.0,
                        yaw: -140.0,
                        type: "scene",
                        text: "hotspot3",
                        sceneId: "hotspot3",
                        cssClass: "custom-hotspot",

                        targetYaw: -140.0,
                        targetPitch: 0.0
                    },
                ]
            },

            hotspot2: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot2/hotspot2.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",
                        // targetYaw: -23,
                        // targetPitch: 2
                    },
                    {
                        pitch: -0.6,
                        yaw: 83.1,
                        type: "scene",
                        text: "hotspot8",
                        sceneId: "hotspot8",
                        cssClass: "custom-hotspot",
                        targetYaw: 83.1,
                        targetPitch: -0.6
                    },
                    {
                        pitch: -0.6,
                        yaw: 125.1,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        cssClass: "custom-hotspot",
                        targetYaw: 125.1,
                        targetPitch: -0.6
                    },
                    {
                        pitch: -0.6,
                        yaw: 180,
                        type: "scene",
                        text: "hotspot3",
                        sceneId: "hotspot3",
                        cssClass: "custom-hotspot",
                        targetYaw: 180,
                        targetPitch: -0.6
                    },
                    {
                        pitch: -0.6,
                        yaw: 300,
                        type: "scene",
                        text: "hotspot6",
                        sceneId: "hotspot6",
                        cssClass: "custom-hotspot",
                        targetYaw: 300,
                        targetPitch: -0.6
                    },
                ]
            },

            hotspot3: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot3/hotspot3.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",

                        targetYaw: 37.1,
                        targetPitch: -0.6,
                    },

                    {
                        pitch: -0.6,
                        yaw: 50.1,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        cssClass: "custom-hotspot",
                        targetYaw: 50.1,
                        targetPitch:  -0.6,
                    },

                    {
                        pitch: -0.6,
                        yaw: 240.1,
                        type: "scene",
                        text: "hotspot9",
                        sceneId: "hotspot9",
                        cssClass: "custom-hotspot",
                        targetYaw:240.1,
                        targetPitch: -0.6,
                    }
                ]
            },

            hotspot4: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot4/hotspot4.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",
                        targetYaw: 37.1,
                        targetPitch: -0.6
                    },

                    {
                        pitch: -0.6,
                        yaw: 130.1,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        cssClass: "custom-hotspot",
                        targetYaw: -0.6,
                        targetPitch: 130.1
                    },

                    {
                        pitch: -0.6,
                        yaw: -100.1,
                        type: "scene",
                        text: "hotspot6",
                        sceneId: "hotspot6",
                        cssClass: "custom-hotspot",
                        targetYaw: -100.1,
                        targetPitch: -0.6
                    },
                ]
            },

            hotspot6: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot6/hotspot6.jpg",

                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",

                        targetYaw: 37.1,
                        targetPitch: -0.6
                    },
                    {
                        pitch: -0.6,
                        yaw: 90.1,
                        type: "scene",
                        text: "hotspot4",
                        sceneId: "hotspot4",
                        cssClass: "custom-hotspot",

                        targetYaw: 90.1,
                        targetPitch: -0.6
                    },
                    {
                        pitch: -0.6,
                        yaw: 140.1,
                        type: "scene",
                        text: "hotspot2",
                        sceneId: "hotspot2",
                        cssClass: "custom-hotspot",

                        targetYaw: 140.1,
                        targetPitch: -0.6
                    },

                    {
                        pitch: -0.6,
                        yaw: 190.1,
                        type: "scene",
                        text: "hotspot9",
                        sceneId: "hotspot9",
                        cssClass: "custom-hotspot",

                        targetYaw: -0.6,
                        targetPitch: 190.1
                    },

                ]
            },

            hotspot7: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot7/hotspot7.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",
                        targetYaw: 37.1,
                        targetPitch: -0.6,

                    },
                    {
                        pitch: -0.6,
                        yaw: 100.1,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        targetYaw: -23,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 210.1,
                        type: "scene",
                        text: "hotspot9",
                        sceneId: "hotspot9",
                        targetYaw: 210.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 150.1,
                        type: "scene",
                        text: "hotspot3",
                        sceneId: "hotspot3",
                        targetYaw: 150.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 310.1,
                        type: "scene",
                        text: "hotspot10",
                        sceneId: "hotspot10",
                        targetYaw: 310.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                ]
            },

            hotspot8: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot8/hotspot8.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",

                        targetYaw: 37.1,
                        targetPitch: -0.6,
                    },
                    {
                        pitch: -0.6,
                        yaw: 210.1,
                        type: "scene",
                        text: "hotspot1",
                        sceneId: "hotspot1",
                        targetYaw: 210.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 18.1,
                        type: "scene",
                        text: "hotspot4",
                        sceneId: "hotspot4",
                        targetYaw: 18.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                ]
            },

            hotspot9: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot9/hotspot9.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        text: "Trở về",
                        sceneId: "sky",
                        targetYaw: 37.1,
                        targetPitch: -0.6,
                    },
                    {
                        pitch: -0.6,
                        yaw: 60.1,
                        type: "scene",
                        text: "hotspot7",
                        sceneId: "hotspot7",
                        targetYaw: 60.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: -10.0,
                        type: "scene",
                        text: "hotspot10",
                        sceneId: "hotspot10",
                        targetYaw: -0.6,
                        targetPitch: -10.0,
                        cssClass: "custom-hotspot",

                    },
                ]
            },

            hotspot10: {
                title: "Spring House or Dairy",
                hfov: 150,
                yaw: 5,
                pitch: currentPitch,
                type: "equirectangular",
                panorama: "imgs/pano/hotspots/hotspot10/hotspot10.jpg",
                hotSpots: [
                    {
                        pitch: -0.6,
                        yaw: 37.1,
                        type: "scene",
                        sceneId: "sky",
                        targetYaw: 37.1,
                        targetPitch: -0.6,
                    },
                    {
                        pitch: -0.6,
                        yaw: 60.1,
                        type: "scene",
                        text: "hotspot6",
                        sceneId: "hotspot6",
                        targetYaw: 60.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 100.0,
                        type: "scene",
                        text: "hotspot2",
                        sceneId: "hotspot2",
                        targetYaw: 100.0,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",

                    },
                    {
                        pitch: -0.6,
                        yaw: 170.1,
                        type: "scene",
                        text: "hotspot9",
                        sceneId: "hotspot9",
                        targetYaw: 170.1,
                        targetPitch: -0.6,
                        cssClass: "custom-hotspot",
                    },
                ]
            },
        },
    });

    // Listen for scene switch start and end events
    panoramaViewer.on('scenechange', function () {
        isSceneSwitching = true; // Set the flag when a scene switch starts
        console.log("Scene switching started");
    });

    panoramaViewer.on('scenechangefadedone', function () {
        isSceneSwitching = false; // Clear the flag when scene switch is complete
        console.log("Scene switching complete");
    });


    // Update current pitch on user interaction
    panoramaViewer.on('mousedown', function () {
        panoramaViewer.on('mouseup', function () {
            currentPitch = panoramaViewer.getPitch();
            console.log("User interacted", currentPitch);

            // Delay starting auto-rotation
             setTimeout(function () {
                if (!isSceneSwitching) {
                    panoramaViewer.startAutoRotate(autoRotateSpeed, currentPitch);
                } else {
                    //console.log("Auto-rotation prevented due to scene switch");
                }
             }, autoRotateDelay);
        });
    });
}
