/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/FlexSongProtocol.h>

@class NSString, NSSet, NSArray, UIImage, NSDictionary;

@interface FlexSongBackend : NSObject <FlexSongProtocol> {

	BOOL _hidden;
	BOOL _recalled;
	UIImage* _cachedArtwork;
	NSString* _uid;
	NSString* _audioEncoderPresetName;
	NSString* _songName;
	NSString* _artistName;
	NSSet* _tagIDs;
	NSSet* _keywords;
	NSArray* _assets;
	NSString* _songFormat;
	long long _sampleRate;
	long long _metadataVersion;
	NSDictionary* _customOptions;

}

@property (nonatomic,retain) NSString * uid;                                 //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * audioEncoderPresetName;              //@synthesize audioEncoderPresetName=_audioEncoderPresetName - In the implementation block
@property (nonatomic,retain) NSString * songName;                            //@synthesize songName=_songName - In the implementation block
@property (nonatomic,retain) NSString * artistName;                          //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSSet * tagIDs;                                 //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,retain) NSSet * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) UIImage * artwork;                              //@synthesize cachedArtwork=_cachedArtwork - In the implementation block
@property (nonatomic,retain) NSString * songFormat;                          //@synthesize songFormat=_songFormat - In the implementation block
@property (assign,nonatomic) long long sampleRate;                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL recalled;                                  //@synthesize recalled=_recalled - In the implementation block
@property (assign,nonatomic) long long metadataVersion;                      //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * customOptions;                   //@synthesize customOptions=_customOptions - In the implementation block
-(BOOL)isLoaded;
-(NSSet *)keywords;
-(void)setKeywords:(NSSet *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(long long)sampleRate;
-(void)setSampleRate:(long long)arg1 ;
-(UIImage *)artwork;
-(void)setArtwork:(UIImage *)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)uid;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(BOOL)canPlay;
-(long long)metadataVersion;
-(void)setMetadataVersion:(long long)arg1 ;
-(void)updateAssets:(id)arg1 ;
-(SCD_Struct_Fr12)minimumDuration;
-(NSString *)songName;
-(NSSet *)tagIDs;
-(id)assetWithID:(id)arg1 ;
-(SCD_Struct_Fr12)naturalDuration;
-(id)existingAssetWithID:(id)arg1 ;
-(NSString *)songFormat;
-(void)updateSongArtist:(id)arg1 title:(id)arg2 tags:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 recalled:(BOOL)arg6 metadataVersion:(long long)arg7 ;
-(NSString *)audioEncoderPresetName;
-(BOOL)recalled;
-(id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 recalled:(BOOL)arg7 audioEncoderPresetName:(id)arg8 metadataVersion:(long long)arg9 songFormat:(id)arg10 sampleRate:(long long)arg11 customOptions:(id)arg12 ;
-(void)updateSampleRate:(long long)arg1 ;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_Fr12)arg2 failureReason:(id*)arg3 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_Fr12)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2 ;
-(id)_loadArtworkImage;
-(BOOL)_verifyClips:(id)arg1 inRendition:(id)arg2 failureReason:(id*)arg3 ;
-(BOOL)_verifyKeyFrames:(id)arg1 failureReason:(id*)arg2 ;
-(NSDictionary *)customOptions;
-(void)setAudioEncoderPresetName:(NSString *)arg1 ;
-(void)setSongName:(NSString *)arg1 ;
-(void)setTagIDs:(NSSet *)arg1 ;
-(void)setSongFormat:(NSString *)arg1 ;
-(void)setRecalled:(BOOL)arg1 ;
-(void)setCustomOptions:(NSDictionary *)arg1 ;
@end

