//
//  AliyunIdentityVerifyCode.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityVerifyCode_h
#define AliyunIdentityVerifyCode_h

typedef NS_ENUM(NSUInteger, AliyunIdentityBizCode) {
    AliyunBizCodeVerifySuccess = 1000,      //verify success
    AliyunBizCodeVerifyFailed = 1001,       //verify failed
    AliyunBizCodeSystemException = 1002,    //system exception
    AliyunBizCodeInitFailed = 1003,         //init failed
    AliyunBizCodeCameraFailed = 1004,       //camera failed
    AliyunBizCodeNoneNetwork = 1005,        //network error
    AliyunBizCodeQuitByUser = 1006,         //user quit
    AliyunBizCodeCertifyIdInvalid = 1007,   //certifyId Invalid
    AliyunBizCodeIDCardExpired = 1008,      //IDCard expired
    AliyunBizCodeDateException = 1009,      //system date exception
    AliyunBizCodeTypeFailed = 1011,         //wrong document type
    AliyunBizCodeMissingInformation = 1012, //The identified key information is missing or the format check fails
    AliyunBizCodeOperationMaximum = 1014,   //Maximum number of user actions

};

/** SDK Error Code */
#define CODE_SYSTEM_BUSY @"CODE_SYSTEM_BUSY"
#define CODE_CERTIFY_ID_INVALID @"CODE_CERTIFY_ID_INVALID"
//inner exception
#define CODE_SYSTEM_EXC @"CODE_SYSTEM_EXC"
//SDK initialization failed
#define CODE_INIT_ERROR @"CODE_INIT_ERROR"
//The user actively interrupts the process
#define CODE_USER_BACK @"CODE_USER_BACK"
//User operation timed out
#define CODE_OVER_TIME @"CODE_OVER_TIME"
//Can't find camera
#define CODE_ERROR_CAMERA_NO_FOUND @"CODE_ERROR_CAMERA_NO_FOUND"
//Can't open camera
#define CODE_ERROR_CAMERA_OPEN_ERROR @"CODE_ERROR_CAMERA_OPEN_ERROR"
//The current device does not support
#define CODE_UNSUPPORTED_DEVICE @"CODE_UNSUPPORTED_DEVICE"
//The current system does not support facial recognition
#define CODE_OS_VERSION_LOW @"CODE_OS_VERSION_LOW"
//network timeout
#define CODE_NETWORK_TIMEOUT @"CODE_NETWORK_TIMEOUT"
//network anomaly
#define CODE_NETWORK_ERROR @"CODE_NETWORK_ERROR"
//No camera permission
#define CODE_NO_CAMERA_PERMISSION @"CODE_NO_CAMERA_PERMISSION"
//ID has expired
#define CODE_OVER_AUTH_TIME @"CODE_OVER_AUTH_TIME"
#define CODE_FRONT_OCR_FAILED @"CODE_FRONT_OCR_FAILED"
#define CODE_BACK_OCR_FAILED @"CODE_BACK_OCR_FAILED"
//OCR success
#define CODE_OCR_SUCCESS @"CODE_OCR_SUCCESS"
//liveness success
#define CODE_LIVENESS_SUCCESS @"CODE_LIVENESS_SUCCESS"
//verify success
#define CODE_VERIFY_SUCCESS @"CODE_VERIFY_SUCCESS"
//verify fail
#define CODE_VERIFY_FAIL @"CODE_VERIFY_FAIL"
//oss upload error
#define CODE_OSS_UPLOAD_ERROR @"CODE_OSS_UPLOAD_ERROR"
//Global timeout
#define CODE_SDK_MAX_TIMEOUT @"CODE_SDK_MAX_TIMEOUT"
//Bank card recognition failed
#define CODE_FRONT_BANK_FAILED @"CODE_FRONT_BANK_FAILED"
//Server data returns exception
#define CODE_HTTP_RES_INVALID @"CODE_HTTP_RES_INVALID"
//Client timestamp exception
#define CODE_CLIENT_TIME_INVALID @"CODE_CLIENT_TIME_INVALID"
//ocr certificate type error
#define CODE_OCR_WRONG_CARD @"CODE_OCR_WRONG_CARD"
//The identified key information is missing or the format check fails
#define CODE_OCR_FAILED_COMPLIANCE @"CODE_OCR_FAILED_COMPLIANCE"

#endif /* AliyunIdentityVerifyCode_h */
