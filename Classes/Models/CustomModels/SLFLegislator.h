#import "_SLFLegislator.h"
#import <CoreLocation/CoreLocation.h>

@class MultiRowCalloutCell;
@class RKManagedObjectMapping;
@class SLFState;
@class SLFChamber;
@class SLFParty;
@interface SLFLegislator : _SLFLegislator {}
@property (nonatomic,readonly) SLFState *state;
@property (nonatomic, readonly) NSArray *sortedRoles;
@property (nonatomic, readonly) NSString *districtID;
@property (nonatomic, readonly) SLFDistrict *hydratedDistrict;
@property (nonatomic, readonly) NSString *term;
@property (nonatomic, readonly) SLFParty *partyObj;
@property (nonatomic, readonly) SLFChamber *chamberObj;
@property (nonatomic, readonly) NSString *fullNameLastFirst;
@property (nonatomic, readonly) NSString *lastnameInitial;
@property (nonatomic, readonly) NSString *chamberShortName;
@property (nonatomic, readonly) NSString *formalName;
@property (nonatomic, readonly) NSString *demoLongName;
@property (nonatomic, readonly) NSString *districtMapLabel;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *districtLongName;
@property (nonatomic, readonly) NSString *districtShortName;
@property (nonatomic, readonly) NSString *normalizedPhotoURL;
@property (nonatomic, readonly) MultiRowCalloutCell *calloutCell;

+ (NSArray *)sortDescriptors;
- (NSString *)districtPartyString;
- (NSString *)title;
+ (RKManagedObjectMapping *)mappingWithStateMapping:(RKManagedObjectMapping *)stateMapping;
+ (NSString *)resourcePathForCoordinate:(CLLocationCoordinate2D)coordinate;
+ (NSString *)resourcePathForAllWithStateID:(NSString *)stateID;
@end
