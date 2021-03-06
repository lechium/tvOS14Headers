/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/VideoMovie.h>

@interface IrisMovie : VideoMovie {

	SCD_Struct_Fr12 _cachedPreciseAssetStart;

}

@property (assign,nonatomic) SCD_Struct_Fr12 cachedPreciseAssetStart;              //@synthesize cachedPreciseAssetStart=_cachedPreciseAssetStart - In the implementation block
@property (nonatomic,readonly) BOOL front; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_Fr12)startTime;
-(int)duration;
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(SCD_Struct_Fr12)cachedPreciseAssetStart;
-(void)setCachedPreciseAssetStart:(SCD_Struct_Fr12)arg1 ;
-(BOOL)front;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
@end

