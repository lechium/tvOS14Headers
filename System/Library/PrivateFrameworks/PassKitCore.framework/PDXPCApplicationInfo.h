/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PDXPCApplicationInfo : NSObject {

	unsigned _applicationState;
	NSString* _displayID;

}

@property (nonatomic,readonly) unsigned applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,readonly) NSString * displayID;                   //@synthesize displayID=_displayID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayID;
-(unsigned)applicationState;
@end
