/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements {

	unsigned long long _width;
	unsigned long long _height;
	NSArray* _supportedPixelFormats;
	NSArray* _preferredPixelFormats;
	NSArray* _supportedColorSpaceProperties;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _widthAlignment;
	unsigned long long _heightAlignment;
	NSArray* _supportedCacheModes;
	BOOL _prewireBuffers;
	BOOL _memoryPoolUseAllowed;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSArray * supportedPixelFormats;                        //@synthesize supportedPixelFormats=_supportedPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * preferredPixelFormats;                        //@synthesize preferredPixelFormats=_preferredPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * supportedColorSpaceProperties;                //@synthesize supportedColorSpaceProperties=_supportedColorSpaceProperties - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long widthAlignment;                    //@synthesize widthAlignment=_widthAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long heightAlignment;                   //@synthesize heightAlignment=_heightAlignment - In the implementation block
@property (nonatomic,copy) NSArray * supportedCacheModes;                          //@synthesize supportedCacheModes=_supportedCacheModes - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
+(void)initialize;
+(id)cacheModesForOptimizedDisplayAccess;
+(id)cacheModesForOptimizedHWAccess;
+(id)cacheModesForCacheProfile:(int)arg1 ;
+(id)cacheModesForOptimizedCPUAccess;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(NSArray *)supportedPixelFormats;
-(unsigned)mediaType;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(void)setSupportedPixelFormats:(NSArray *)arg1 ;
-(void)setSupportedColorSpaceProperties:(NSArray *)arg1 ;
-(unsigned long long)bytesPerRowAlignment;
-(void)setSupportedCacheModes:(NSArray *)arg1 ;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(void)setPreferredPixelFormats:(NSArray *)arg1 ;
-(BOOL)prewireBuffers;
-(BOOL)memoryPoolUseAllowed;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(void)setWidthAlignment:(unsigned long long)arg1 ;
-(void)setHeightAlignment:(unsigned long long)arg1 ;
-(unsigned long long)planeAlignment;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(Class)formatClass;
-(unsigned long long)widthAlignment;
-(unsigned long long)heightAlignment;
-(NSArray *)preferredPixelFormats;
-(NSArray *)supportedColorSpaceProperties;
-(NSArray *)supportedCacheModes;
-(void)_resolvePixelFormat;
@end

