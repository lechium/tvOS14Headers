/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSProcessStringPredicate.h>

@class NSString;

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {

	NSString* _beforeTranslocationBundlePath;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)beforeTranslocationBundlePath;
@end

