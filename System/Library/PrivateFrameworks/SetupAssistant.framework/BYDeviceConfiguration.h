/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BYDeviceConfiguration : NSObject {

	NSString* _productVersion;

}

@property (assign,nonatomic) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
+(id)currentConfiguration;
-(id)init;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
@end

