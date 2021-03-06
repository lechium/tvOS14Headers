/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/SCRGovernor.h>

@class NSMutableSet, NSString;

@interface SCRCompositeGovernor : NSObject <SCRGovernor> {

	os_unfair_lock_s _lock;
	NSMutableSet* _governors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)taskAdministrator:(id)arg1 isEligibleToPerformTask:(id)arg2 eligiblityError:(id*)arg3 ;
-(void)taskAdministrator:(id)arg1 willPerformTask:(id)arg2 ;
-(void)taskAdministrator:(id)arg1 didCompleteTask:(id)arg2 withError:(id)arg3 ;
-(void)addGovernor:(id)arg1 ;
-(void)removeGovernor:(id)arg1 ;
@end

