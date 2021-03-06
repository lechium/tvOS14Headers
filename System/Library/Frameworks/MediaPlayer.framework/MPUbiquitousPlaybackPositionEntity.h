/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject {

	BOOL _hasBeenPlayed;
	NSString* _ubiquitousIdentifier;
	double _bookmarkTimestamp;
	double _bookmarkTime;
	unsigned long long _userPlayCount;

}

@property (nonatomic,copy,readonly) NSString * ubiquitousIdentifier;              //@synthesize ubiquitousIdentifier=_ubiquitousIdentifier - In the implementation block
@property (assign,nonatomic) double bookmarkTimestamp;                            //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                                 //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) unsigned long long userPlayCount;                    //@synthesize userPlayCount=_userPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                                  //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
+(id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1 ;
-(id)init;
-(double)bookmarkTime;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(id)initWithUbiquitousIdentifier:(id)arg1 ;
-(void)setBookmarkTimestamp:(double)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setUserPlayCount:(unsigned long long)arg1 ;
-(BOOL)hasBeenPlayedModified;
-(BOOL)userPlayCountModified;
-(BOOL)bookmarkTimeModified;
-(BOOL)bookmarkTimestampModified;
-(NSString *)ubiquitousIdentifier;
-(double)bookmarkTimestamp;
-(unsigned long long)userPlayCount;
@end

