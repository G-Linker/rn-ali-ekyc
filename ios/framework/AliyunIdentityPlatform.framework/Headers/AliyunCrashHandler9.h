//
//  AliyunCrashHandler9.h
//  Created by nansong.zxc on 2021/2/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define DECLARE_OC_START_EXCEPTION_GUARD(classname) \
- (void)classname##_oc_start_exception_guard {}

#define DECLARE_OC_END_EXCEPTION_GUARD(classname) \
- (void)classname##_oc_end_exception_guard {}

#define DECLARE_C_START_EXCEPTION_GUARD(classname) \
void classname##_c_start_exception_guard() {}

#define DECLARE_C_END_EXCEPTION_GUARD(classname) \
void classname##_c_end_exception_guard() {} \
void classname##_c_register_exception_guard() { \
    [[AliyunCrashHandler9 sharedInstance] addFilterStartAddr:(NSUInteger)classname##_c_start_exception_guard withEndAddr:(NSUInteger)classname##_c_end_exception_guard]; \
}

#define DECLARE_REGISTER_OC_EXCEPTION_GUARD(classname) \
[[AliyunCrashHandler9 sharedInstance] addFilter:@""#classname""];

#define DECLARE_REGISTER_C_EXCEPTION_GUARD(classname) \
    classname##_c_register_exception_guard();

typedef void (^AliyunCrashBlock9)(NSString *deviceInfo, NSString *crashContent);
@interface AliyunCrashHandler9 : NSObject

+ (instancetype)sharedInstance;

- (void)initWithBlock:(AliyunCrashBlock9) crashBlock;

- (void)addFilter:(NSString *) filterClassName;

- (void)addFilterStartAddr:(NSUInteger) startAddr withEndAddr:(NSUInteger) endAddr;

- (void)clearFilter;

- (void)restoreExceptionHandlers;
@end

NS_ASSUME_NONNULL_END
