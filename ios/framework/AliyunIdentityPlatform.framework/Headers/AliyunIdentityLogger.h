//  AliyunLogService.h
//  AliyunIdentityDemo
//
//  Created by lingxuan on 2020/6/3.
//  Copyright © 2020 lingxuan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    AliyunLogLevelInfo = 0,
    AliyunLogLevelWarning,
    AliyunLogLevelDebug,
    AliyunLogLevelError,
    AliyunLogLevelVerbose,
} AliyunLogLevel;

@interface AliyunIdentityLogger : NSObject
@property(nonatomic, copy) NSString *certifyId;

+ (AliyunIdentityLogger *)sharedInstance;

- (void)logEvent:(NSString*)actionName bizParams:(NSDictionary *)bizParam;
- (void)flushLog;
@end

NS_ASSUME_NONNULL_END
