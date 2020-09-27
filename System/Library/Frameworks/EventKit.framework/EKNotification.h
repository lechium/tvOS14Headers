/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKObjectID, NSString, NSURL;

@interface EKNotification : EKObject

@property (nonatomic,readonly) EKObjectID * objectID; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * UUID; 
@property (nonatomic,copy) NSURL * hostURL; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(id)calendar;
-(NSString *)UUID;
-(EKObjectID *)objectID;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSURL *)hostURL;
-(void)setHostURL:(NSURL *)arg1 ;
-(BOOL)commit:(id*)arg1 ;
@end
