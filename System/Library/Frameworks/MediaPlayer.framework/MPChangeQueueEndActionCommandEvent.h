/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesQueueEndAction;
	long long _queueEndAction;

}

@property (nonatomic,readonly) long long queueEndAction;                  //@synthesize queueEndAction=_queueEndAction - In the implementation block
@property (nonatomic,readonly) BOOL preservesQueueEndAction;              //@synthesize preservesQueueEndAction=_preservesQueueEndAction - In the implementation block
-(long long)queueEndAction;
-(BOOL)preservesQueueEndAction;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end
