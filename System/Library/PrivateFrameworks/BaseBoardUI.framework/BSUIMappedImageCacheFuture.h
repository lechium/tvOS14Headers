/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoardUI/BaseBoardUI-Structs.h>
@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject {

	os_unfair_lock_s _lock;
	BSAtomicSignal* _submitted;
	NSThread* _submissionThread;
	/*^block*/id _lock_workBlock;
	BOOL _lock_workCompletionWasCalled;
	UIImage* _postlock_cachedImage;

}
-(id)init;
-(void)dealloc;
@end

