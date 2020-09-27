/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCRTaskHandler : NSObject <NSCopying> {

	/*^block*/id _syncBlock;
	/*^block*/id _asyncBlock;

}
+(id)synchronousHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)asynchronousHandlerWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithSyncBlock:(/*^block*/id)arg1 asyncBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_syncHandler;
-(/*^block*/id)_asyncHandler;
@end
