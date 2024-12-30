//
//  AliyunIdentityVerifyRes.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityVerifyRes_h
#define AliyunIdentityVerifyRes_h

#import "AliyunIdentityOcrInfo.h"
#import <UIKit/UIKit.h>

@interface AliyunIdentityVerifyRes : NSObject
@property (nonatomic, assign) int code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) AliyunIdentityOcrInfo *ocrInfo;
@property (nonatomic, strong) UIImage *idCardFrontCropImage;
@property (nonatomic, strong) UIImage *idCardBackCropImage;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, strong) UIImage *faceImage;
@end

#endif /* AliyunIdentityVerifyRes_h */
