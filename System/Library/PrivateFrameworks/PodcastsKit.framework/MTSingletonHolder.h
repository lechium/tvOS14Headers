/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTSingletonHolder : NSObject {

	os_unfair_lock_s _lock;
	id _instance;

}

@property (nonatomic,retain) id instance;              //@synthesize instance=_instance - In the implementation block
-(id)instance;
-(void)setInstance:(id)arg1 ;
@end

