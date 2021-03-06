/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface MTAHTSupport : NSObject {

	NSBundle* _bundle;
	Class _AHTDevice;

}

@property (retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) Class AHTDevice;              //@synthesize AHTDevice=_AHTDevice - In the implementation block
+(id)sharedInstance;
+(id)allDevices;
-(id)init;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(Class)AHTDevice;
-(void)setAHTDevice:(Class)arg1 ;
@end

