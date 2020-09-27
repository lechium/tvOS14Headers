/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPFrameScoreFilter : NSObject {

	int _numFilterTabs;
	float* _scoreArray;
	float _distanceVariance;
	float _diffVariance;
	int _numOfScores;

}
-(void)dealloc;
-(id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3 ;
-(float)processFrameScore:(float)arg1 validScore:(BOOL)arg2 ;
@end
