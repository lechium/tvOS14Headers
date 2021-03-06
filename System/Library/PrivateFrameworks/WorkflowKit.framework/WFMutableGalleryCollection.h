/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSString, NSArray, NSDate;

@interface WFMutableGalleryCollection : WFGalleryCollection {

	CKRecordID* identifier;
	NSString* name;
	NSString* collectionDescription;
	NSArray* workflows;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * collectionDescription; 
@property (nonatomic,copy) NSArray * workflows; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)collectionDescription;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(NSArray *)workflows;
-(NSDate *)modifiedAt;
-(void)setWorkflows:(NSArray *)arg1 ;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
@end

