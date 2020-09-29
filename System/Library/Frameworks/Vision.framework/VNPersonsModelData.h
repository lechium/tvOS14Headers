/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/VNPersonsModelDataSource.h>
#import <libobjc.A.dylib/VNPersonsModelFaceModelDataProvider.h>

@protocol VNPersonsModelDataDelegate;
@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSDate, NSString;

@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider> {

	unsigned long long _maximumIdentities;
	unsigned long long _faceprintRequestRevision;
	NSMutableArray* _personUniqueIdentifiers;
	NSMutableDictionary* _personUniqueIdentifierToSerialNumberMapping;
	NSMutableDictionary* _serialNumberToFaceObservationsMapping;
	NSMutableIndexSet* _availablePersonSerialNumbers;
	NSDate* _lastModificationDate;
	id<VNPersonsModelDataDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VNPersonsModelDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                             //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long faceprintRequestRevision;               //@synthesize faceprintRequestRevision=_faceprintRequestRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VNPersonsModelDataDelegate>)delegate;
-(void)setDelegate:(id<VNPersonsModelDataDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_modelWasModified;
-(BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)faceModelPersonsCount;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1 ;
-(id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)faceprintRequestRevision;
-(NSDate *)lastModificationDate;
-(unsigned long long)numberOfPersonsInPersonsModel:(id)arg1 ;
-(id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2 ;
-(unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2 ;
-(id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3 ;
-(id)_requestNewIdentitySerialNumberAndReturnError:(id*)arg1 ;
-(id)_uniqueFaceObservationsWithRegistrationState:(BOOL)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id*)arg5 ;
-(BOOL)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1 ;
-(void)_removePersonWithUniqueIdentifier:(id)arg1 ;
-(void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2 ;
-(void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 ;
-(id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1 ;
@end

