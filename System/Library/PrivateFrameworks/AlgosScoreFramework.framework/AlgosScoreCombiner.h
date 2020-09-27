/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AlgosScoreCombiner : NSObject {

	void* combinerData;
	int _debug;

}

@property (assign,nonatomic) int debug;              //@synthesize debug=_debug - In the implementation block
+(id)combiner;
-(id)init;
-(void)dealloc;
-(int)debug;
-(void)setDebug:(int)arg1 ;
-(double)signedMeanSquaredDeviation;
-(void)addScore:(double)arg1 weight:(double)arg2 type:(id)arg3 label:(id)arg4 ;
-(void)clearScores;
-(id)scoreScores:(id)arg1 ;
@end
