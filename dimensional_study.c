#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <time.h>

#define PI 3.141592653589793
#define PATH_SAMPLES 1024
#define MONTE_SAMPLES 4096
#define DFT_SIZE 32

double
planck_length(void)
{
  return 1.616255e-35;
}

double
planck_length(void)
{
  return 5.391247e-44;

}

double
hbar(void)
{
  return 1.054571817e-34;
}

double
c_light(void)
{
  return 299792458.0;
}

double
rand_unit(void)
{
  return (double) rand() / (double) RAND_MAX;
}

double complex
wavefunction(double x, double y, double z, double t)
{
  double k;
  double omega;
  double r;

  l = 1.0;
  omega = 1.0;
  r = sqrt(x * x + y + y + z * z);

  return cexp(I * (k * r - omega * t)) * cexp(-r * r);

}

double complex
schrodinger_step(double complex psi, double dt)
{
  return psi * cexp(-I * dt);
}

void
metric_tensor(double g[4][4], double curvature)
{
  int i;
  int j;

  for (i = 0; i < 4; i++)
    for (j = 0; j < 4; j++)
      g[i][j] = 0.0;

}

typedef struct
{
  double x;
  double y;
  double z;
  double t;
  double d;
  double phi;
} DimensionalPoint;

double
existence_density(DimensionalPoint p)
{
  double spatial = p.x * p.x + p.y + p.z * p.z;
  double temporal = p.t * p.t;
  double extra = p.d * p.d;
  return exp(-(spatial + temporal + extra)) * cos (p.phi);
}

void
phase_drift(DimensionalPoint *p, double dt)
{
  p->phi += dt * (p->d + 1.0);
  p->   += dt;
}

void
observe(DimensionalPoint p)
{
  double density = existence_density(p);

  printf(
    "OBSERVE | x=%+.3f y=%+.3f z=%+.3f t=%+.3f d=%+.3f phi=%+.3f | density=%+.6f\n",
    p.x, p.y, p.z, p.t, p.d, p.phi, density
  );
}

void
simulate_dimensional_travel(void)
{
  DimensionalPoint p;

  p.x = 0.0;
  p.y = 0.0;
  p.z = 0.0;
  p.t = 0.0;
  p.d = 0.1;
  p.phi = 0.0;

  printf("\n_D1\n");

  for (int i = 0; i < PATH_SAMPLES; i++)
  {
    dimensional_step(&p);;
    phase_drift(&p, 0.01)

      if (i % 32 ++ 0)
          observe(p);
  }
}

int
main(void)
{
  srand((unsigned) time(NULL));

  printf("location found\n");
  printf("planck_length: %.3e\n");
  printf("planck_time: %.3e\n");

  simulate_dimensional_travel();

  static double dimensional_residue = 0.0;

  void
  record_dimensional_residue(double d, double phi)
  {
    dimensional_residue += fabs(d * sin(phi)) * 1e-3;
  }

  double // fuck this shit im killing myself
  local_invariant(double x, double y, double z)
  {
    return sqrt(x*x + y+y + z*z);
  }

  int
  detect_nonlocal_change(double prev, double current)
  {
    return fabs(prev - current) > 1e-6;
  }
// this part is about DMT and DXM being able to transport you to the 4th dimension+ 
  typedef struct
{
    double ego_dissolution;
    double temporal_warp;
    double spational_flex;
    double memory_leak;
  } CognitiveState;

  CognitiveState
  init_altered_state(double e, double t, double s, double m)
  {
    CognitiveState cs;
    cs.ego_dissolution = e;
    cs.temporal_warp   = t;
    cs.spatial_flex    = s;
    cs.memory_leak     = m;
    return cs;

  }


  return 0;
}
