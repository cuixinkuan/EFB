//
//  CECommonDefine.h
//  EFlightSharedStorageDemo
//
//  Created by cxk on 2020/11/16.
//  Copyright © 2020 cxk. All rights reserved.
//

#ifndef CECommonDefine_h
#define CECommonDefine_h

#ifdef DEBUG // 调试
#define CELog(...) NSLog(__VA_ARGS__);
#else // 发布
#define CELog(...)
#endif

//判断字符串是否为空
#define kStringIsEmpty(str) ([NSString isEmptyString:str])
//为nil时赋空值
#define CENullStr(val) (val==nil?@"":val)

typedef NS_ENUM(NSUInteger, ConfigOperationPolicy) { // 提供给共享区别的App使用数据读写权限
    ConfigOperationPolicyReadWrite = 0,   // 读写均可
    ConfigOperationPolicyOnlyRead,        // 只读
};

static NSString * const mugroup = @"group.ceair.Wormhole";  //默认的 appgroup id
static NSString * const alertTip1 = @"请注意：数据创建者已将当前数据操作的对外权限设置为只读！";

#endif /* CECommonDefine_h */
