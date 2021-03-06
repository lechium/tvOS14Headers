/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentContainer, NSManagedObjectContext;

@interface VCPFaceTimePersistentStore : NSObject {

	NSPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _backgroundContext;

}
+(id)sharedInstance;
-(id)init;
-(id)fetchAllFaceTimeSessions;
-(BOOL)storeFaceTimeSession:(id)arg1 ;
@end

