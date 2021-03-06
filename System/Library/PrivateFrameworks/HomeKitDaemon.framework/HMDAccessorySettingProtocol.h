/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol HMDAccessorySettingProtocol <NSObject>
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@required
-(NSString *)name;
-(long long)type;
-(id)value;
-(NSArray *)constraints;

@end

