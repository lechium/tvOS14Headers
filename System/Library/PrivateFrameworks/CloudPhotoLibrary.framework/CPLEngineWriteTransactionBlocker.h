/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
@interface CPLEngineWriteTransactionBlocker : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _unblock;

}
-(void)dealloc;
-(void)unblock;
-(id)initWithUnblockBlock:(/*^block*/id)arg1 ;
@end

