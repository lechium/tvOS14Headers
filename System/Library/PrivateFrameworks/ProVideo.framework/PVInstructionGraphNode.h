/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVInstructionGraphNode : NSObject {

	unsigned long long _uuid;
	BOOL _isDebugDrawingEnabled;

}

@property (assign,nonatomic) BOOL isDebugDrawingEnabled;              //@synthesize isDebugDrawingEnabled=_isDebugDrawingEnabled - In the implementation block
-(id)description;
-(id)init;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(SCD_Struct_PV0)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(id)getAllSourceNodes;
-(BOOL)isPassthru;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(void)unloadIGNode;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(BOOL)isDebugDrawingEnabled;
-(void)setIsDebugDrawingEnabled:(BOOL)arg1 ;
@end
