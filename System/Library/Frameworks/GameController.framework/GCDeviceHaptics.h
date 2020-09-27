/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GCHapticCapabilityGraph, NSMutableSet, GCController;

@interface GCDeviceHaptics : NSObject {

	GCHapticCapabilityGraph* _capabilityGraph;
	NSMutableSet* _supportedLocalities;
	GCController* _controller;

}

@property (assign,nonatomic,__weak) GCController * controller; 
@property (nonatomic,readonly) GCHapticCapabilityGraph * capabilityGraph; 
@property (nonatomic,retain) NSMutableSet * supportedLocalities;                       //@synthesize supportedLocalities=_supportedLocalities - In the implementation block
@property (assign,nonatomic,__weak) GCController * controller;                         //@synthesize controller=_controller - In the implementation block
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(GCHapticCapabilityGraph *)capabilityGraph;
-(id)initWithCapabilityGraph:(id)arg1 ;
-(id)createEngineWithLocality:(id)arg1 ;
-(NSMutableSet *)supportedLocalities;
-(void)setSupportedLocalities:(NSMutableSet *)arg1 ;
@end
