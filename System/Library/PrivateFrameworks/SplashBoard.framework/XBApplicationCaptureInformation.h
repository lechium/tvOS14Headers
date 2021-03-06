/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSOrderedSet, NSString;

@interface XBApplicationCaptureInformation : NSObject <BSDescriptionProviding> {

	NSArray* _captureInfos;
	NSArray* _launchImagePaths;
	NSOrderedSet* _launchRequests;

}

@property (nonatomic,readonly) NSOrderedSet * launchRequests;              //@synthesize launchRequests=_launchRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned long long)estimatedMemoryImpactForLaunchRequest:(id)arg1 ;
-(id)launchImagePathForLaunchRequest:(id)arg1 ;
-(id)caarPathForLaunchRequest:(id)arg1 ;
-(id)initWithLaunchRequests:(id)arg1 captureInfos:(id)arg2 launchImagePaths:(id)arg3 ;
-(NSOrderedSet *)launchRequests;
@end

