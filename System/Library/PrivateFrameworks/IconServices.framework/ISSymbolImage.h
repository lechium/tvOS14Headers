/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>

@interface ISSymbolImage : ISImage {

	CGImageRef _internalCGImage;
	double _internalScale;
	CGSize _internalSize;
	BOOL _flippable;
	double _pointSize;
	unsigned long long _symbolSize;
	long long _symbolWeight;
	double _referencePointSize;
	double _fontMatchingScaleFactor;
	double _baselineOffset;
	double _capHeight;
	CGRect _alignmentRect;
	CGRect _contentBounds;

}

@property (nonatomic,readonly) double pointSize;                               //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) unsigned long long symbolSize;                  //@synthesize symbolSize=_symbolSize - In the implementation block
@property (nonatomic,readonly) long long symbolWeight;                         //@synthesize symbolWeight=_symbolWeight - In the implementation block
@property (nonatomic,readonly) double referencePointSize;                      //@synthesize referencePointSize=_referencePointSize - In the implementation block
@property (nonatomic,readonly) double fontMatchingScaleFactor;                 //@synthesize fontMatchingScaleFactor=_fontMatchingScaleFactor - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                          //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,readonly) double capHeight;                               //@synthesize capHeight=_capHeight - In the implementation block
@property (nonatomic,readonly) CGRect alignmentRect;                           //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds;                           //@synthesize contentBounds=_contentBounds - In the implementation block
@property (getter=isFlippable,nonatomic,readonly) BOOL flippable;              //@synthesize flippable=_flippable - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(BOOL)placeholder;
-(BOOL)isFlippable;
-(double)pointSize;
-(double)referencePointSize;
-(double)fontMatchingScaleFactor;
-(CGRect)alignmentRect;
-(double)baselineOffset;
-(double)capHeight;
-(CGRect)contentBounds;
-(CGImageRef)cgImage;
-(id)initWithNamedVectorGlyph:(id)arg1 ;
-(unsigned long long)symbolSize;
-(long long)symbolWeight;
@end
