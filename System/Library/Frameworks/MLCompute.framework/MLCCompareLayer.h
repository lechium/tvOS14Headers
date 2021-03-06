/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@interface MLCCompareLayer : MLCLayer {

	int _predicate;

}

@property (nonatomic,readonly) int predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
+(id)layerWithPredicate:(int)arg1 ;
-(id)description;
-(int)predicate;
-(id)initWithPredicate:(int)arg1 ;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
@end

