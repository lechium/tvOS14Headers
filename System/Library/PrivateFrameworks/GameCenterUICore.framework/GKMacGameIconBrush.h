/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageBrush.h>
#import <libobjc.A.dylib/GKBrushIdentification.h>

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _outputSize;

}

@property (assign,nonatomic) CGSize outputSize;                     //@synthesize outputSize=_outputSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)outputSize;
-(void)setOutputSize:(CGSize)arg1 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(id)renderedImageIdentifier;
@end

