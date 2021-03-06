/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface AXMText : NSObject {

	NSString* _text;
	double _confidence;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

