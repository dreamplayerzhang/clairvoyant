#include "AlgorithmProperties.h"

namespace pandora {

const AlgProperties::AlgorithmProperty AlgProperties::prop[] = {
    {   // ALG_BEAUTY_FACE
        .name = "BeautyFace",
        .threadName = "BeautyFaceThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 1,
    },
    {   // ALG_BEAUTY_FACE_CAP
        .name = "BeautyFaceCap",
        .threadName = "BeautyFaceCapThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 1,
    },
    {   // ALG_AGE_GENDER_DETECTION
        .name = "AgeGenderDetection",
        .threadName = "AgeGenderDetectionThread",
        .frameDrop = true,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_HDR_CHECKER
        .name = "HDRChecker",
        .threadName = "HDRCheckerThread",
        .frameDrop = true,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_HDR
        .name = "HDR",
        .threadName = "HDRThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_IMAGE_STABILIZATION
        .name = "PhotoSolid",
        .threadName = "PhotoSolidThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 2,
    },
    {   // ALG_SMART_SELECT
        .name = "SmartSelect",
        .threadName = "SmartSelectThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_SMART_SHOT
        .name = "SmartShot",
        .threadName = "SmartShotThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_NIGHT_SHOT
        .name = "NightShot",
        .threadName = "NightShotThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_ANTI_SHAKING
        .name = "AntiShaking",
        .threadName = "AntiShakingThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_MOVIE_SOLID_REPVIEW
        .name = "MovieSolidPreview",
        .threadName = "MovieSolidPreviewThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 1,
    },
    {  //ALG_VIDEO_STAB_RECORDING
        .name = "MovieSolidRecording",
        .threadName = "MovieSolidRecordingThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 3,
    },
    {  //ALG_PICTURE_ZOOM
        .name = "PictureZoom",
        .threadName = "PictureZoomThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 2,
    },
    {   // ALG_FAIR_LIGHT
        .name = "FairLight",
        .threadName = "FairLightThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 2,
    },
    {   // ALG_MICRO_PLASTIC
        .name = "MicroPlastic",
        .threadName = "MicroPlasticThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 2,
    },
    {  //ALG_PICTURE_ZOOM2
        .name = "PictureZoom2",
        .threadName = "PictureZoom2Thread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_STILL_BOKEH
        .name = "StillBokeh",
        .threadName = "StillBokehThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_STILL_BOKEHA
        .name = "StillBokehA",
        .threadName = "StillBokehAThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_RT_BOKEH
        .name = "RTBokeh",
        .threadName = "RTBokehThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {  //ALG_DUAL_CAM_NIGHT_SHOT
        .name = "DualCamShot",
        .threadName = "DualCamShotThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_SUPER_RESOLUTION
        .name = "SuperResolution",
        .threadName = "SuperResolutionThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_SINGLE_BOKEH
        .name = "SigleBokeh",
        .threadName = "SignalBokehThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 1,
    },
    {   // ALG_SINGLE_BOKEH_CAP
        .name = "SigleBokehCap",
        .threadName = "SignalBokehCapThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 1,
    },
    {  //ALG_UTILS
        .name = "Utils",
        .threadName = "UtilsThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
    {   // ALG_MAX_INVALID
        .name = "InvalidAlgorithmType",
        .threadName = "InvalidAlgorithmTypeThread",
        .frameDrop = false,
        .maxQueueSize = 1,
        .argsNum = 0,
    },
};

};
