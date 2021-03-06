/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject {

	NSDictionary* _zeroKeyword;
	double _score;

}

@property (readonly) NSDictionary * zeroKeyword;              //@synthesize zeroKeyword=_zeroKeyword - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(double)score;
-(id)initWithKeyword:(id)arg1 score:(double)arg2 ;
-(NSDictionary *)zeroKeyword;
@end

