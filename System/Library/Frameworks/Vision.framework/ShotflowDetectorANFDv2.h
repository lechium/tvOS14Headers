/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:46 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/ShotflowDetectorANODBase.h>

@interface ShotflowDetectorANFDv2 : ShotflowDetectorANODBase
+(id)filterThresholds;
+(id)supportedLabelKeys;
+(Class)shotflowNetworkClass;
-(id)initWithNetwork:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
@end

