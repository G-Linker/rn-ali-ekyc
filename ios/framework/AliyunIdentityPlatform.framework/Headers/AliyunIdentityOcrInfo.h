//
//  AliyunIdentityOcrInfo.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityOcrInfo_h
#define AliyunIdentityOcrInfo_h

#define CDT_CHINA_ID            @"00000001"
#define CDT_GLOBAL_PASSPORT     @"01000000"
#define CDT_HK_OLD_ID           @"00000006"
#define CDT_HK_NEW_ID           @"00000008"
#define CDT_GOTO_HK_MACAO_ID    @"00000007"
#define CDT_HK_GOTO_DALU_ID     @"00000009"
#define CDT_MACAO_ID            @"000000011"
#define CDT_TAIWAN_ID           @"000000012"

// 香港身份证
@interface HKIDOcrInfo : NSObject
@property(nonatomic, copy) NSString *IdNumber;          // 身份证号
@property(nonatomic, copy) NSString *Symbols;           // 符号
@property(nonatomic, copy) NSString *CurrentIssueDate;  // 本次签发时间
@property(nonatomic, copy) NSString *NameCode;          // 中文电报号码
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *EnglishName;       // 英文名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *IsPermanent;       // 是否永久
@property(nonatomic, copy) NSString *FirstIssueDate;    // 首次签发
@property(nonatomic, copy) NSString *Name;              // 中文名
@end

// PASSPORT
@interface PassportOcrInfo : NSObject
@property(nonatomic, copy) NSString *Surname;           // 姓
@property(nonatomic, copy) NSString *Givenname;         // 名
@property(nonatomic, copy) NSString *PassportNo;        // 护照号码
@property(nonatomic, copy) NSString *Nationality;       // 国籍
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *CountryCode;       // 国家码
@property(nonatomic, copy) NSString *ExpiryDate;        // 失效日期
@end

// 港澳回乡证
@interface GotoMainlandOcrInfo : NSObject
@property(nonatomic, copy) NSString *Name;              // 中文姓名
@property(nonatomic, copy) NSString *EnglishName;       // 英文姓名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *IdNumber;          // 证件号
@property(nonatomic, copy) NSString *IssueDate;         // 签发日期
@property(nonatomic, copy) NSString *ExpiryDate;        // 失效日期
@property(nonatomic, copy) NSString *OriginOfIssue;     // 签发机关
@end

// 澳门身份证
@interface MacaoIDOcrInfo : NSObject
@property(nonatomic, copy) NSString *SurnameCN;         // 中文姓
@property(nonatomic, copy) NSString *GivennameCN;       // 中文名
@property(nonatomic, copy) NSString *Surname;           // 英文姓
@property(nonatomic, copy) NSString *Givenname;         // 英文名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *IdNumber;          // 身份证号
@property(nonatomic, copy) NSString *ExpiryDate;        // 失效日期
@property(nonatomic, copy) NSString *PlaceOfBirth;      // 签发机关
@end

// 台胞证
@interface TaiwanIDOcrInfo : NSObject
@property(nonatomic, copy) NSString *Name;              // 中文姓
@property(nonatomic, copy) NSString *EnglishName;       // 英文名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *IdNumber;          // 身份证号
@property(nonatomic, copy) NSString *IssueDate;         // 签发日期
@property(nonatomic, copy) NSString *ExpiryDate;        // 失效日期
@property(nonatomic, copy) NSString *OriginOfIssue;     // 签发机关
@property(nonatomic, copy) NSString *PlaceOfIssue;      // 签发地点
@end

// 港澳通行证
@interface HKMacaoIDOcrInfo : NSObject
@property(nonatomic, copy) NSString *Name;              // 中文姓
@property(nonatomic, copy) NSString *EnglishName;       // 英文名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *IdNumber;          // 身份证号
@property(nonatomic, copy) NSString *IssueDate;         // 签发日期
@property(nonatomic, copy) NSString *ExpiryDate;        // 失效日期
@property(nonatomic, copy) NSString *PlaceOfIssue;      // 签发地点
@property(nonatomic, copy) NSString *OriginOfIssue;     // 签发机关
@end

// 大陆身份证
@interface ChinaIDOcrInfo : NSObject
@property(nonatomic, copy) NSString *Name;              // 中文姓名
@property(nonatomic, copy) NSString *Sex;               // 性别
@property(nonatomic, copy) NSString *Ethnicity;         // 民族
@property(nonatomic, copy) NSString *BirthDate;         // 出生日期
@property(nonatomic, copy) NSString *IdNumber;          // 身份证号
@property(nonatomic, copy) NSString *Address;           // 住址
@end

/**
 * OCR识别结果信息
 */
@interface AliyunIdentityOcrInfo : NSObject
// 香港新老身份证信息
@property(nonatomic, strong) HKIDOcrInfo *hkidOcrInfo;

// 全球护照信息
@property(nonatomic, strong) PassportOcrInfo *passportOcrInfo;

// 港澳回乡证
@property(nonatomic, strong) GotoMainlandOcrInfo *gotoMainlandOcrInfo;

// 澳门身份证
@property(nonatomic, strong) MacaoIDOcrInfo *macaoIDOcrInfo;

// 台胞证
@property(nonatomic, strong) TaiwanIDOcrInfo *taiwanIDOcrInfo;

// 港澳通行证
@property(nonatomic, strong) HKMacaoIDOcrInfo *hkMacaoIDOcrInfo;

// 大陆身份证
@property(nonatomic, strong) ChinaIDOcrInfo *chinaIDOcrInfo;

@end

#endif /* AliyunIdentityOcrInfo_h */
