//
//  AliyunIdentityCenter.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityCenter_h
#define AliyunIdentityCenter_h

#import "AliyunIdentityCom.h"
#import <UIKit/UIKit.h>
#import "AliyunIdentityOcrInfo.h"
#import "CustomConfigModel.h"

typedef NS_ENUM(NSInteger, AliyunIdentityOSSFileIdx){
    IOF_INVALID,
    IOF_IDCARD_FRONT,
    IOF_IDCARD_BACK,
    IOF_BANK,
    IOF_FACE_IMAGE
};

@interface AliyunIdentityCenter : NSObject
@property(nonatomic, copy) NSString *certifyId;
@property(nonatomic, strong) AliyunIdentityVerifyBlock completionCallback;
@property(nonatomic, strong) NSDictionary *extParams;
@property(nonatomic, strong) UIViewController *currentViewController;
@property(nonatomic, strong) NSDictionary *deviceConfig;
@property(nonatomic, copy) NSString *metaInfo;
@property(nonatomic, strong) NSTimer *sdkMaxTimeOutTimer;
@property(atomic, strong) NSDictionary *toygerUploadParams;
@property(atomic, strong) NSDictionary *toygerAlgorithmParams;
@property(atomic, strong) NSMutableArray *taskArray;

//-----------------------------------------
@property(nonatomic, strong) AliyunIdentityOcrInfo *ocrInfo;
@property(nonatomic, strong) UIImage *idcardFrontImage;
@property(nonatomic, strong) UIImage *idcardFrontCropImage;
@property(nonatomic, copy) NSString *idcardFrontOss;
@property(nonatomic, strong) NSString *idcardFrontImageBase64;
@property(nonatomic, strong) UIImage *idcardBackImage;
@property(nonatomic, strong) UIImage *idcardBackCropImage;
@property(nonatomic, copy) NSString *idcardBackOss;
@property(nonatomic, strong) NSString *idcardBackImageBase64;

//-----------------------------------------
@property(nonatomic, strong) UIImage *faceHighQualityImage;
@property(nonatomic, strong) NSData *faceHighQualityImageHash;
@property(nonatomic, strong) NSString *faceImageOss;
@property(nonatomic, strong) NSString *faceImageBase64;

// 是否开启上传备份的人脸图片
@property(nonatomic, assign) BOOL isOpenFaceBackup;
@property(nonatomic, strong) UIImage *backupFaceImage;
@property(nonatomic, strong) NSData *backupFaceImageHash;
@property(nonatomic, strong) NSString *backupFaceImageOss;
@property(nonatomic, strong) NSString *backupFaceImageBase64;


@property(nonatomic, strong) NSData *zimVideoHash;
@property(nonatomic, strong) NSString *zimVideoOss;
@property(nonatomic, strong) NSData *photinusVideoHash;
@property(nonatomic, strong) NSString *photinusVideoOss;

@property(nonatomic, assign) BOOL isSelectedPhoto;

@property(nonatomic, strong) NSString *faceLivenessFarNearOpen;
@property(nonatomic, strong) NSString *model;
@property(nonatomic, strong) NSDictionary *faceLivenessFarNearConfig;
@property(nonatomic, strong) NSString *appQualityCheck;

@property(nonatomic, strong) UIImage *farImage;
@property(nonatomic, strong) NSData *farImageHash;
@property(nonatomic, strong) NSString *farImageOss;
@property(nonatomic, strong) NSString *farBase64;

@property(nonatomic, strong) UIImage *closeImage;
@property(nonatomic, strong) NSData *closeImageHash;
@property(nonatomic, strong) NSString *closeImageOss;
@property(nonatomic, strong) NSString *closeImageBase64;

//-----------------------------------------
@property(atomic, assign) BOOL isBusy;
@property(nonatomic, assign) long verifyStartTime;
@property(nonatomic, strong) CustomConfigModel *customConfig;

+ (AliyunIdentityCenter *) sharedInstance;

- (void)sendResWithCode:(int)code withMessage:(NSString *)message withOcrInfo:(AliyunIdentityOcrInfo *)ocrInfo;
- (void)clear;
- (BOOL)isCrashDetectEnable;

@end
#endif /* AliyunIdentityCenter_h */
