/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)remove:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 ;
@end

