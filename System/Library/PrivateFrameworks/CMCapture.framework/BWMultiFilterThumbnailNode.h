/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {

	CGSize _thumbnailSize;
	NSArray* _filters;
	BWColorLookupCache* _colorLookupCache;
	FigColorCubeMetalFilter* _filter;
	opaqueCMFormatDescriptionRef _mostRecentFormatDescription;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)videoOutput;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(int)_loadAndConfigureFilterBundle;
-(id)initWithFilters:(id)arg1 thumbnailSize:(CGSize)arg2 ;
@end
