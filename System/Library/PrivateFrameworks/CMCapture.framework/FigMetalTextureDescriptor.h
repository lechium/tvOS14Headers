/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject {

	BOOL _isLinear;
	NSString* _label;
	MTLTextureDescriptor* _desc;

}

@property (assign,nonatomic) BOOL isLinear;                            //@synthesize isLinear=_isLinear - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MTLTextureDescriptor * desc;              //@synthesize desc=_desc - In the implementation block
-(id)init;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(MTLTextureDescriptor *)desc;
-(void)setDesc:(MTLTextureDescriptor *)arg1 ;
-(BOOL)isLinear;
-(void)setIsLinear:(BOOL)arg1 ;
@end

