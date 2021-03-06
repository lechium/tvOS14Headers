/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentSharee : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
+(Class)meltedClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setOwner:(id)arg1 ;
-(id)UUID;
-(id)address;
-(id)displayName;
-(id)firstName;
-(id)lastName;
-(void)setAddress:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)owner;
-(int)entityType;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(int)shareeStatusRaw;
-(void)setShareeStatusRaw:(int)arg1 ;
-(int)shareeAccessLevelRaw;
-(void)setShareeAccessLevelRaw:(int)arg1 ;
@end

