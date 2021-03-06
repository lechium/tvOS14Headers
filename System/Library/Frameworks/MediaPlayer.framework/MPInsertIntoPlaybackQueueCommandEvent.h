/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSArray, MPRemotePlaybackQueue, NSNumber, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	NSArray* _supportedInsertionPositions;
	long long _insertionPosition;
	MPRemotePlaybackQueue* _playbackQueue;
	NSNumber* _privateListeningOverride;
	NSString* _insertAfterContentItemID;
	long long _destinationOffset;

}

@property (nonatomic,copy) NSArray * supportedInsertionPositions;                  //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
@property (nonatomic,readonly) long long insertionPosition;                        //@synthesize insertionPosition=_insertionPosition - In the implementation block
@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
@property (nonatomic,readonly) NSString * insertAfterContentItemID;                //@synthesize insertAfterContentItemID=_insertAfterContentItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                        //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(MPRemotePlaybackQueue *)playbackQueue;
-(NSArray *)supportedInsertionPositions;
-(NSString *)insertAfterContentItemID;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(long long)destinationOffset;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3 ;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
-(long long)insertionPosition;
-(NSNumber *)privateListeningOverride;
@end

