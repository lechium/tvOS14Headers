/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASEntitlement : NSObject
+(BOOL)hasTrueBooleanEntitlement:(id)arg1 logHandle:(id)arg2 ;
+(BOOL)taskWithAuditToken:(SCD_Struct_PA14)arg1 hasTrueBooleanEntitlement:(id)arg2 logHandle:(id)arg3 ;
+(BOOL)_trueBooleanEntitlementCheckWithSecTask:(SecTaskRef)arg1 entitlement:(id)arg2 logHandle:(id)arg3 ;
@end
