/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@protocol MFObservable;
@class NSLock;

@interface _MFDistinctUntilChangedObservable : MFObservable {

	id<MFObservable> _observable;
	id _lastObservedResult;
	NSLock* _lock;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_isLastResultDistinctFromResult:(id)arg1 ;
@end

