//
//  AliyunIdentityCom.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityCom_h
#define AliyunIdentityCom_h

#pragma mark ----------SDK Version--------------------

#define SDK_VERSION     @"1.2.5.intl"

#pragma mark ----------log setting--------------------

#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

#define AliyunLog(...) \
    NSLog(__VA_ARGS__);

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#pragma mark ---------Client Callback Block--------------
@class AliyunIdentityVerifyRes;
typedef void (^AliyunIdentityVerifyBlock)(AliyunIdentityVerifyRes *response);

#pragma mark --------------Verify model---------------
#define IDENTITY_FACE_LIVENESS      @"FACE_LIVENESS"
#define IDENTITY_FACE_VERIFY        @"FACE_VERIFY"
#define IDENTITY_ID_OCR             @"ID_OCR"
#define IDENTITY_EKYC               @"eKYC"

#pragma mark ----------Screen adaptation related------------------
// based with IPhone6
#define ALIYUN_WIDTH 750.0
#define ALIYUN_HEIGHT 1334.0

#define ALIYUN_SCREEN_BOUNDS ([UIScreen mainScreen].bounds)
#define ALIYUN_SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define ALIYUN_SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)


#define ALIYUN_IPHONEX ([UIScreen mainScreen].bounds.size.height == 812 || [UIScreen mainScreen].bounds.size.height == 896)

#define ALIYUN_NO_NAV_HEIGHT  (ALIYUN_IPHONEX ? 24 : 0)
//#define ALIYUN_STATUSBAR_HEIGHT (ALIYUN_IPHONEX ? 44.f:20.f)
#define ALIYUN_STATUSBAR_HEIGHT (ALIYUN_IPHONEX ? 54.f:30.f)
#define ALIYUN_NAVBAR_HEIGHT (ALIYUN_IPHONEX ? 88.f : 64.f)
#define ALIYUN_TABBAR_HEIGHT (ALIYUN_IPHONEX ? 49.f+34.f : 49.f)

#pragma mark ----------Resource Bundle related----------------

//Platform
#define ALIYUN_PlatformBundlePath [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"AliyunIdentityPlatform.bundle"]
#define ALIYUN_PlatformImagePath [ALIYUN_PlatformBundlePath stringByAppendingPathComponent:@"images"]
#define ALIYUN_PLATFORM_IMAGE(imageName) [UIImage imageNamed:[ALIYUN_PlatformImagePath stringByAppendingPathComponent:[NSString stringWithFormat:@"%@",imageName]]]

//OCR
#define ALIYUN_OCRBundlePath [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"AliyunIdentityOCR.bundle"]
#define ALIYUN_OCRImagePath [ALIYUN_OCRBundlePath stringByAppendingPathComponent:@"images"]
#define ALIYUN_OCR_IMAGE(imageName) [UIImage imageNamed:[ALIYUN_OCRImagePath stringByAppendingPathComponent:[NSString stringWithFormat:@"%@",imageName]]]

//FACE
#define ALIYUN_FaceBundlePath [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:@"AliyunIdentityFace.bundle"]
#define ALIYUN_FaceImagePath [ALIYUN_FaceBundlePath stringByAppendingPathComponent:@"images"]
#define ALIYUN_FACE_IMAGE(imageName) [UIImage imageNamed:[ALIYUN_FaceImagePath stringByAppendingPathComponent:[NSString stringWithFormat:@"%@",imageName]]]

#endif /* AliyunIdentityCom_h */
