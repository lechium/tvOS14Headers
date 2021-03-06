/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKIDSDestination : NSObject {

	NSString* _deviceIdentifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(NSString *)deviceIdentifier;
-(id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
@end

