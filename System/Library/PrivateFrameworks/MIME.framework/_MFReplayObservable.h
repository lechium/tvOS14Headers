/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSLock, MFObservable, MFQueue;

@interface _MFReplayObservable : MFObservable {

	NSLock* _lock;
	MFObservable* _observable;
	MFQueue* _queue;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(void)_enqueue:(id)arg1 ;
-(id)initWithObservable:(id)arg1 count:(unsigned long long)arg2 ;
@end

