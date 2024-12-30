//
//  UIImage+Aliyun.h
//  AliyunIdentityUtils
//
//  Created by 汪澌哲 on 2024/6/5.
//  Copyright © 2024 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMedia/CoreMedia.h>

@interface UIImage (Aliyun)

+ (nullable UIImage *)aliyun_imageWithCMSampleBuffer:(CMSampleBufferRef  _Nullable )samplebuffer;
@end
